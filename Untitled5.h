void UpperCase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97&& s[i]<=122){
			s[i]-=32;
		}
	}printf("chuyen chuoi s: %s",s);
}
