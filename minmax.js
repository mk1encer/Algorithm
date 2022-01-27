function solution(s) {
    var answer = '';
    const nums=[];
    let temp=0;
    
    for(let i=0;i<s.length;i++){
        if(s[i]===' '){
            nums.push(+s.substr(temp,i-temp));
            temp=i+1;
        }
    }
    nums.push(+s.substring(temp,s.length));
    console.log(nums);
    
    nums.sort((a,b)=>{return a-b});
    
    answer=`${nums[0]} ${nums[nums.length-1]}`
    
    return answer;
}
