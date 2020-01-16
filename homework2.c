#include <stdio.h>
#include <math.h>

void printArray(double data[], int n){
//prints the first n values of the array
	
//	printf("%d\n", data);
	
	double* ptr = &data[0];
	 for(int i = 0; i<n; i++){
	printf("%lf\n", *(ptr + i ));

	}


}

int computePopulations(double Po, double r, double P[], int n){
//takes po with growth rate r and fills p with each value of population up to the size of the array which is n

		
		double p = Po;
	int i = 0;	
		
	for(i = 0; i<n && p<(pow(10,9)); i++){
		//P[0] = Po;
		P[i] = p;
		
	 	p = Po*(exp(r*(i+1)));


		
		
//	printf("%lf\n", P[i]);
	}
//	printf("%lf\n", n);
	
//	printf("First value: %lf\n", P[0]);

	return i;
}

int concatenate(char *dest, int destSize, const char *s1, const char *s2){
//concates strings s1 and s2 and places result in dest
	
//	char* concatenated;
//	char[]* string1;
//	char[]* string2;
//	int count = 0;
//	int i = 0;
/*	for( i = 0; i<destSize; i++){
		dest[i] = s1[i];
		count++;
		if(!(s1[i] == '\0' && count<destSize)){
			dest[i] = s1[i];
			count++;
			
		}else if(!(s2[i] == '\0')){	
		dest[i]=s2[i];	
		count++;
	


	}

	}
//replace last(ending index) value with null character 
	printf("%c\n", dest[count]);
	dest[i] =  '\0';
	return count;
	}*/
//int i = 0;
/*if(*s1 == '\0' || *s2 == '\0'){ 
	*dest = '\0';
	return 0;
}else{
for(i = 0; i<(destSize-1); i++){
	if(s1[i] != '\0'){
	dest[i] = s1[i];
	count++;
	}else if(s2[i] != '\0'){
	dest[i]=s2[i];
	count++;
	}else{
	dest[i] = '\0';
	return i;
	}
	}
	dest[i] = '\0';
	return count;

}
}*/
if(*s1 == '\0' && *s2 == '\0'){
	*dest='\0';
	return 0;
}else{
	int i = 0;
	int j = 0;

	for(i = 0; i<destSize-1; i++){
		if(!(s1[i] == '\0')&& j==0){
			dest[i]=s1[i];
		}else if(!(s2[j] == '\0')){
			dest[i]=s2[j];
			j++;
		}else{
			dest[i] = '\0';
			return i;
		}
	}
dest[i] = '\0';
return i;
}
}


int capitalize(char *str){
//takes lowercase letters in str to uppercase and returns the number of letters that were changed.
//A-Z: 65-90 a-z: 97-122


//	int len = sizeof(str);
	int num = 0;
	int cntr = 0;
	while(str[num] != '\0'){
		if(97<= str[num] && str[num] <= 122){
		str[num] = str[num] - 32;
		cntr++;

		}	
		num++;
		
		
	}
	

	printf("%d\n", cntr );
	return cntr;
}

//Where do I put the values in array in the function or in main??
//what ever is a parameter must be defined in main
//use -lm to use math.h with exp() function
int main(){

//	double data[7] = {20, -5, 6, 4, 2, -8};	
//	int n = sizeof(data)/sizeof(double);
	
	
//	printArray(data, n);
//	double Po = 1;
//	double r = 1;
//	double P[n];
//	computePopulations(Po, r , P , n);
//	char str[] = "Hello World";
//	capitalize(str);

	char *s1 = "Kevin";
	char *s2 = "Bacon";
	char dest[10];
	concatenate(dest, 10, s1, s2);
	return 0;
}
