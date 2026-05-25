            #include "bsq.h"
                 #define R return
             #define F(i,a,b) for(int i=a;i<b;i++)
          int L(FILE* f, t_elements* e){int r=fscanf(f,
        "%d%c%c%c",&(e->n_lines),&(e->empty),&(e->obstacle
      ),&(e->full));R(r!=4||e->n_lines<=0||e->empty==e->\
     obstacle||e->empty==e->full||e->obstacle==e->full)?-1\
    :0;}char* S(char* a,int s,int l){char* r=malloc(l+1);int \
    i=0,j=0;while(a[i]){if(i>=s&&j<l)r[j++]=a[i];i++;}r[j]=0\
   ;R r;}void M(char** a){int i=0;if(a){while(a[i])free(a[i++\
   ]);free(a);}}int C(char** m,char c1,char c2){int i=0,j;while\
  (m[i]){j=0;while(m[i][j]){if(m[i][j]!=c1&&m[i][j]!=c2)R-1;j++;\
  }i++;}R 0;}int A(FILE* f,t_map* m,t_elements* e){m->height=e->\
  n_lines;m->grid=malloc((m->height+1)*sizeof(char*));m->grid[m\
  ->height]=0;char* l=0;size_t len=0;if(getline(&l,&len,f)==-1)\
  {M(m->grid);R-1;}F(i,0,m->height){int r=getline(&l,&len,f);if(\
  r==-1||l[r-1]!='\n'){free(l);M(m->grid);R-1;}r--;m->grid[i]=S(\
  l,0,r);if(!m->grid[i]){free(l);M(m->grid);R-1;}if(!i)m->width=\
   r;else if(m->width!=r){free(l);M(m->grid);R-1;}}if(C(m->grid,\
   e->empty,e->obstacle)==-1){free(l);M(m->grid);R-1;}free(l);R\
    0;}void B(t_map* m,t_square* s,t_elements* e){int x[m->\
    height][m->width];F(i,0,m->height)F(j,0,m->width)x[i][j]\
     =0;F(i,0,m->height)F(j,0,m->width){if(m->grid[i][j]==\
      e->obstacle)x[i][j]=0;else if(!i||!j)x[i][j]=1;else\
        {int a=x[i-1][j],b=x[i-1][j-1],c=x[i][j-1],v=a<b\
          ?(a<c?a:c):(b<c?b:c);x[i][j]=v+1;}if(x[i][j]>\
             s->size){s->size=x[i][j];s->i=i-x[i][j]\
                 +1;s->j=j-x[i][j]+1;}}}void P(t_map\
                    *m,t_square* s,t_elements* e
