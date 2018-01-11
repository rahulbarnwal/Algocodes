#include<iostream>
#include<string>
#include<math.h>



using namespace std;

int main(){
	
	int testcase,i,lft,rit;
	cin>>testcase;
	char s[1000002];
	int n,check9,sum;


	while(testcase){
		i=0;
		check9=1;
		cin>>s;
		while(s[i]!='\0'){i++;}
		n=i;;
		cout<<"Lenght of string entered is ="<<n<<endl;
        //case when all digitis are 9
		for(i=0;i<n;i++)
		{
			if(s[i]!='9')
			{
				check9=0;
				break;
			}
		}
		if(check9==1)
		{
			cout<<"ALL NINE BLOCK"<<endl;
			s[n]='1';
			s[0]='1';
			for(i=1;i<n;i++)s[i]='0';
				cout<<s<<endl; 
				testcase--;
				continue;
		}
		

		
		if(n%2==0){ rit=n/2; lft=rit-1;}
		else{
			if(n==1){ cout<<((s[0]-48)+1); testcase--; continue; }//single digit case except 9
			else{ rit= (n/2+1 ); lft= (n/2-1);}
		}
		while(s[rit]==s[lft]){ rit++; lft--;}

		//case when its already pallinrome and not composed of all 9s
		if(lft<0){
			if(n%2==0)
			{
				sum=0;
				for(i=0;i<=n/2-1;i++){
					//cout<<"s[0]="<<(s[i]-48)<<endl;
					sum=sum+(s[i]-48)*pow(10.0,n/2-1-i);
					
				}
				sum=sum+1;
				i=0;
				for(i=0;i<n/2;i++){
					s[n/2-1-i]=char(sum%10+48);
					s[n/2+i]=s[n/2-1-i];
					sum=sum/10;
					//cout<<"%";

				}		
					cout<<s<<endl;
					testcase--; continue;
			}

			else
			{
					if(s[n/2]-48==9)//13931
					{
						sum=0;
						for(i=0;i<=n/2;i++){
						//cout<<"s[0]="<<(s[i]-48)<<endl;
						sum=sum+(s[i]-48)*pow(10.0,n/2-i);
					
						}
						sum=sum+1;
						i=0;
						for(i=0;i<=n/2;i++){
						s[n/2-i]=char(sum%10+48);
						s[n/2+i]=s[n/2-i];
						sum=sum/10;

						}
						cout<<s<<endl; testcase--;continue;
					}


				else{ //eg 9245458 or 9249458
					
					s[n/2]=((s[n/2]-48)+1)
					cout<<s[n/2];
					cout<<"CHECK"<<endl;
					cout<<s<<endl; testcase--;continue;
				}
			}
			
		}

		if(s[lft]>s[rit]){ 
			//cout<<"LEFT DIIG TIS LARGER THAN RIGHT DIGIT"<<endl;
			//take mirror image of left part to right part
			while(lft>=0){ s[rit]=s[lft];

				rit++;
				lft--;
			}
			
			cout<<s<<endl;
			testcase--; continue;
		}
			
		else{
			//left element is smaller than right element.
			
			if(n%2==0){

				sum=0;
				
				for(i=0;i<=n/2-1;i++){
					//cout<<"s[0]="<<(s[i]-48)<<endl;
					sum=sum+(s[i]-48)*pow(10.0,n/2-1-i);
					
				}
				//cout<<"sum="<<sum<<endl;;
				sum=sum+1;
				i=0;
				for(i=0;i<n/2;i++){
					s[n/2-1-i]=char(sum%10+48);
					s[n/2+i]=s[n/2-1-i];
					sum=sum/10;
					//cout<<"%";

				}		
					cout<<s<<endl;
					testcase--; continue;
				}

			else{




			}

		}
		
	}
	return 0;
	
}