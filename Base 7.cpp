string convertToBase7(int num) {
        if(num==0) return "0";
        
        int d=abs(num);
        string result;
        while(d>0){
            int r=d%7;
            result=to_string(r)+result;
            d=d/7;
        }

        if(num<0){
            result="-"+result;
        }

        return result;
    }
