bool isPalindrome(int x){
   	int  a, b, i = 1, shu, d, j;
    double zheng=1; 
	shu = x;
    if(x<10&&x>=0)
        return true;
    if(x<0)
        return false;
	do {
		i++;
		d = i;
		shu = shu / 10;
		zheng = zheng * 10;
	} while (shu);
	j = x;
		do {
			if (i <= d / 2)
				break;
			zheng = zheng / 10;
			a = x / zheng;
			a = a % 10;
			b = j % 10;
			j = j / 10;
			i--;
		} while (a == b);
		if (i > d / 2)
            return false;
		else
			return true;
    
}
