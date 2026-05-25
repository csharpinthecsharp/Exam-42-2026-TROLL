        #include "bigint.hpp"
                 #define R return
             #define O bigint::operator
          #define S std::string s1=v(getStr\
        ()),s2=v(o.getStr());size_t l1=s1.size\
      (),l2=s2.size(); bigint::bigint(){str="0"\
     ;}bigint::bigint(unsigned int n){std::\
    stringstream s;s<<n;str=s.str();}bigint::\
    bigint(const bigint& s){*this=s;}bigint& O\
   =(const bigint& s){if(this!=&s)str=s.str;R*this\
   ;}S getStr()const{R str;}S v(const S& s){S r;\
  for(size_t i=s.size();i>0;i--)r.push_back(s[i-1]);R\
  r;}S a(const bigint& x,const bigint& y){S s1=v(x.\
  getStr()),s2=v(y.getStr());S r;while(s1.size()<s2.\
  size())s1.push_back('0');while(s2.size()<s1.size())\
  s2.push_back('0');int c=0;for(size_t i=0;i<s1.size\
  ();i++){int d=(s1[i]-'0')+(s2[i]-'0')+c;c=d/10;r.\
   push_back((d%10)+'0');}if(c)r.push_back(c+'0');R \
   v(r);}bigint O+(const bigint& o)const{bigint t;\
    t.str=a(*this,o);R t;}bigint& O+=(const bigint\
    & o){*this=*this+o;R*this;}bigint& O++(){\
     *this=*this+bigint(1);R*this;}bigint O++\
      (int){bigint t=*this;++(*this);R t;}\
        bigint O<<(unsigned int n)const{\
          bigint t=*this;t.str.insert(t\
            .str.end(),n,'0');R t;}bigint\
             O>>(unsigned int n)const{\
                 bigint t=*this;size_t\
