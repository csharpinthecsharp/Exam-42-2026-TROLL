			#include <stdlib.h>
					#include <unistd.h>
				#include <stdio.h>
            void printboard(char*b,int
         w,int h){for(int y=0,x;y<h;y++,
       putchar('\n'))for(x=0;x<w;x++)putchar
     (b[y*w+x]?'0':' ');}int count_vecino(char
    *b,int w,int h,int x,int y){int c=0;for(int
   dy=-1;dy<=1;dy++)for(int dx=-1;dx<=1;dx++)if
  (dy||dx){int vx=x+dx,vy=y+dy;if(vx>=0&&vx<w&&
 vy>=0&&vy<h)c+=b[vy*w+vx];}return c;}void step(
char*b,char*n,int w,int h){for(int y=0,x,v;y<h;
y++)for(x=0;x<w;x++)v=count_vecino(b,w,h,x,y),n
[y*w+x]=b[y*w+x]?(v==2||v==3):v==3;}int main(int
ac,char**av){if(ac!=4)return 1;int w=atoi(av[1]
 ),h=atoi(av[2]),it=atoi(av[3]),x=0,y=0,p=0,
 i=0;char*t,*b=calloc(w*h,1),*n=calloc(w*h,1
  ),c;if(!b||!n)return 1;while(read(0,&c,1)
   >0){p^=(c=='x');x-=(c=='a'&&x>0);x+=(c
    =='d'&&x<w-1);y-=(c=='w'&&y>0);y+=(c
     =='s'&&y<h-1);if(p)b[y*w+x]=1;}while
       (i++<it)step(b,n,w,h),t=b,b=n,
         n=t;printboard(b,w,h);
            free(b);free(n);
               return 0;
                    }
