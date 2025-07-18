vector<string> split(const string& s, char del){
	vector<string> tokens; 
	size_t start =0; 
	size_t end = s.find(del); 
	while(end != string::npos){
			tokens.push_back(s.substr(start, end-start));
			start = end + 1 ; 
			end = s.find(del, start); 
	}
	tokens.push_back(s.substr(start));
	return tokens; 
}


-Ic:\mingw\bin\../lib/gcc/mingw32/6.3.0/include/c++
-Ic:\mingw\bin\../lib/gcc/mingw32/6.3.0/include/c++/mingw32
-Ic:\mingw\bin\../lib/gcc/mingw32/6.3.0/include/c++/backward
-Ic:\mingw\bin\../lib/gcc/mingw32/6.3.0/include
-Ic:\mingw\bin\../lib/gcc/mingw32/6.3.0/../../../../include
-Ic:\mingw\bin\../lib/gcc/mingw32/6.3.0/include-fixed