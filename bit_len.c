// 象征性的搞了一下简单二分法,减低最坏条件下的运算量。望有大牛再给用更巧妙的方法优化一下。
// 粗放的做了一下范围的二分,减少了判断的次数
 
int bit_len(unsigned int n){
    if(n>0xffff){
        if(n>0xffffff){
            if(n>0x7fffffff)return 32;
            if(n>0x3fffffff)return 31;
            if(n>0x1fffffff)return 30;
  
            if(n>0xfffffff)return 29;
            if(n>0x7ffffff)return 28;
            if(n>0x3ffffff)return 27;
            if(n>0x1ffffff)return 26;
            return 25;
        }else{
            if(n>0x7fffff)return 24;
            if(n>0x3fffff)return 23;
            if(n>0x1fffff)return 22;
  
            if(n>0xfffff)return 21;
            if(n>0x7ffff)return 20;
            if(n>0x3ffff)return 19;
            if(n>0x1ffff)return 18;
            return 17;
        }
    }else{
        if(n>0xff){
            if(n>0x7fff)return 16;
            if(n>0x3fff)return 15;
            if(n>0x1fff)return 14;
  
            if(n>0xfff)return 13;
            if(n>0x7ff)return 12;
            if(n>0x3ff)return 11;
            if(n>0x1ff)return 10;
            return 9;
        }else{
            if(n>0x7f)return 8;
            if(n>0x3f)return 7;
            if(n>0x1f)return 6;
  
            if(n>0xf)return 5;
            if(n>0x7)return 4;
            if(n>0x3)return 3;
            if(n>0x1)return 2;
  
            if(n>0x0)return 1;
        }
    }
    return 0;
}
