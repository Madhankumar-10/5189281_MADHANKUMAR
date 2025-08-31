int ans(int n){
	for(int i=0;i<64;i++){
		if(n>(2^i) && n<(2^(i+1))){
			n=n-(2^i);
			count++;
			break;
		}
		if(n==(2^i)){
			n=n/2;
			count++;
			break;
		}
	}
	if(n==1){
		return count;
	}
	else{
		ans(n);
	}
}	
