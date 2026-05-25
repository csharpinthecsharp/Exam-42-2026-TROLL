            #include "vect2.hpp"
                 #define R return
             #define O vect2::operator
          vect2::vect2(){x=0;y=0;}vect2::
        vect2(int a,int b){x=a;y=b;}vect2::
      vect2(const vect2& s){*this=s;}vect2& O=\
     (const vect2& s){if(this!=&s){x=s.x;y=s.y;}R\
    *this;}int O[](int i)const{R i==0?x:y;}int& O[]\
    (int i){R i==0?x:y;}vect2 O-()const{vect2 t=*this\
   ;t[0]=-t[0];t[1]=-t[1];R t;}vect2 O*(int n)const{\
   R vect2(x*n,y*n);}vect2& O*=(int n){x*=n;y*=n;R*this\
  ;}vect2& O+=(const vect2& o){x+=o.x;y+=o.y;R*this;}vect2&\
  O-=(const vect2& o){x-=o.x;y-=o.y;R*this;}vect2& O*=(const \
  vect2& o){x*=o.x;y*=o.y;R*this;}vect2 O+(const vect2& o)const\
  {R vect2(x+o.x,y+o.y);}vect2 O-(const vect2& o)const{R vect2(\
  x-o.x,y-o.y);}vect2 O*(const vect2& o)const{R vect2(x*o.x,y*o\
  .y);}vect2& O++(){x+=1;y+=1;R*this;}vect2 O++(int){vect2 t=*\
   this;++(*this);R t;}vect2& O--(){x-=1;y-=1;R*this;}vect2 \
   O--(int){vect2 t=*this;--(*this);R t;}bool O==(const vect2\
    & o)const{R(x==o.x&&y==o.y);}bool O!=(const vect2& o)\
    const{R!(*this==o);}vect2::~vect2(){}std::ostream&\
     operator<<(std::ostream& os,const vect2& o){std\
      ::cout<<"{"<<o[0]<<", "<<o[1]<<"}";R os;}vect2\
        operator*(int n,const vect2& o){vect2 t(o\
          );t*=n;R t;}
