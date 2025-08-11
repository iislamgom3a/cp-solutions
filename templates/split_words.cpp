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
