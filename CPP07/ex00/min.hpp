template <typename T>
T min(T &a, T &b){
   
	if (a < b)
		return a;
	if (a > b)
		return b;
	return b;
}
