function solution(n) {
    var answer = 0;
    const arr=[0,1];
    for(let i=2;i<=n;i++){
        arr[i]=arr[i-1]%1234567+arr[i-2]%1234567;
    }
    answer=arr[arr.length-1]%1234567;
    return answer;
}
