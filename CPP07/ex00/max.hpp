template <typename T>
T max(T &a, T &b){
   
	if (a > b)
		return a;
	if (a < b)
		return b;
	return b;
}
