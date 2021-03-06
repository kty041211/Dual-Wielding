#pragma once

class Vec3;

class Matrix {
public:
	void translate(const Vec3&);
	void scale(const Vec3&);
};

class MatrixStack {
public:

	class Ref {
	public:
		MatrixStack* stack;
		Matrix* matrix;
	};


	static MatrixStack Projection;

	MatrixStack::Ref push();
	void pop();
};
