#include<stdio.h>
#include<math.h>
int main(){
	int a,b,n;
	scanf("%d%d", &a,&b);
	n = a+b*30;

	if(n>=382){
		printf("Ma Ket");
	}
	else{
		if(50<=n&n<=78){
			printf("Bao Binh");
		}
		else{
			if(79<=n&n<=110){
			 printf("Song Ngu");
			}
			else{
				if(111<=n&n<=139){
					printf("Bach Duong");
				}
				else{
					if(140<=n&n<=170){
						printf("Kim Nguu");
					}
					else{
						if(171<=n&n<=201){
							printf("Song Tu");
						}
						else{
							if(202<=n&n<=232){
								printf("Cu Giai");
							}
							else{
								if(233<=n&n<=262){
									printf("Su Tu");
								}
								else{
									if(263<=n&n<=292){
										printf("Xu Nu");
									}
									else{
										if(293<=n&n<=323){
											printf("Thien Binh");
										}
										else{
											if(324<=n&n<=352){
												printf("Thien Yet");
										
											}
											else{
												if(353<=n&n<=381){
													printf("Nhan Ma");
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}	
}

