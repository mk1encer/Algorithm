/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    let answer=new ListNode();
    let head=answer;
    console.log(answer);

    while(list1 && list2){
        if(list1.val<list2.val){
            answer.next=new ListNode(list1.val);
            list1=list1.next;
        }
        else{
            answer.next=new ListNode(list2.val);
            list2=list2.next;
        }
        answer=answer.next;
    }
    while(list1){
        answer.next=new ListNode(list1.val);
        list1=list1.next;
        answer=answer.next;
    }
    while(list2){
        answer.next=new ListNode(list2.val);
        list2=list2.next;
        answer=answer.next;
    }
    
     return head.next;
};
