#pragma once
#include <Vector3.h>
#include <Novice.h>

Vector3 add(const Vector3 v1, const Vector3 v2);

Vector3 Subtract(const Vector3 v1, const Vector3 v2);

Vector3 Multiply(float scalar, const Vector3 v);

float Dot(const Vector3 v1, const Vector3 v2);

float Length(const Vector3 v);

Vector3 Normalize(const Vector3 v);

static const int kColumnWidth = 60;
void VectorScreenPrintf(int x, int y, const Vector3 vector, const char* label) 
{
	Novice::ScreenPrintf(x, y, "%.02f", vector.x);
	Novice::ScreenPrintf(x + kColumnWidth * 1, y, "%.02f", vector.y);
	Novice::ScreenPrintf(x + kColumnWidth * 2, y, "%.02f", vector.z);
	Novice::ScreenPrintf(x + kColumnWidth * 3, y, "%s", label);

}
