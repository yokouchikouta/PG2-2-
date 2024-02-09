#pragma once
template<typename T1, typename T2>
class Box {
public:
	T1 height;
	T2 width;

	Box(T1 height, T2 wid) : height(height), width(widht) {}

	T1 size() {
		return static_cast<T1>(height * wight);
	}
};