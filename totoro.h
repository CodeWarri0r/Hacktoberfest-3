void Totoro() {
                          long
                         q;;int                    o[
                         2000],l                  ,x=0
                         ,r[26],                 far*s=
                        (int far*               )(184L<<
                        24),i,j,k;              volatile
                        long far*p              =(+(long
                        far*)(64L               <<16|108
                         ));void                ma1n(int
                          a,int  b,int c){k=s[o[ a]];s[
                           o[a]]=s[o[b]];s[o[b]]=k;if(
                        !(++x%c)&&(k&255)-32){while(q==*p)
                     ;q=*p;}}void Main(int a,int b,int c){if
                    (a<(l/2))Main(a*2,b-2,c);do{for(i=c   =0;
                  i<l-a;i++){    if((s[o[i]]&255)<(s[o  [i +a]        ]&255
                 ))ma1n(i,i+  (c  =a),b);}}while(!!c);}    void  main(
      int a,int b,int c){if(a    >0){for(i=l=0;i<2000;i++){r[(79+
              i)/80]=l;if((s[i]&255)!=68&&(s[i]&255)!=79&&(s[i]&255)!=78)
         o[l++]=i;}r[25]=l;main(-1,24,1);Main(1,24,-1);}else if(!a)
   {if(c>  b){a=s[o[b]]&255;    i      =         b      ;     j=c;while(i<=j
          ){while(i<c&&(s[o[i   ]      ]         &      +    255)<a)i
      ++;while(j>b&&(255&s[o[j  ]      ]         )      >  a)j--;if(-i
  >=-j  ){ma1n(i,j,8);i++;j--;}}main   (         0    ,b,j);main(0,i,c);
       /*1999*/}}else{if(a>-25)main(a-1,0,0);main(0,r[25+a],r[26+a]-1);}}
}
