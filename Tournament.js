function solution(n,a,b)
{
    var answer = 0;
    const square=Math.log(n)/Math.log(2);

    for(let i=0;i<square;i++){
        answer++;
        a=Math.floor((a+1)/2);
        b=Math.floor((b+1)/2);
        
        if(a===b) break;
    }

    return answer;
}
