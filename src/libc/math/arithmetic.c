ainline
int32 signbit(int32 x) {
	int32 y = x>>31;
	y &= 1;
	return y;
}

ainline
int32 sign(int32 x) {
	int32 y = (-(x>>31&1))|1;
	return y;
}
