 #include <regex.h>
 #include <stdio.h>
 #include <string.h>
 
 int main(){
		regex_t my_reg ;
		int error_code , i ;
		char tmp[1024];
		regmatch_t tabmatch[6];
		
		error_code = regcomp(&my_reg,"\\([0-9]\\{2\\}\\)\\.\\([0-9]\\{2\\}\\)\\.\\([0-9]\\{2\\}\\)",0);
		for(;fgets(tmp,1024,stdin);){
		regexec(&my_reg,tmp,6,tabmatch,0);
		for(i = 1 ;tabmatch[i].rm_so != -1 && ((i != 1) && (printf(("/"))) || 1) ;i++)
		{
			tmp[tabmatch[i].rm_eo] = '\0' ;
			printf("%s",tmp+tabmatch[i].rm_so);
			
			}
		}
			regfree(&my_reg);
	 
	 }
