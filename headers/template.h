#pragma once
template <class T>
T GetMax(T a, T b) {
	T result;
    result = (a>b) ? a : b;
	return (result);
}