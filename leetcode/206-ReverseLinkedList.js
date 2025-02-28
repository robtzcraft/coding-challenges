
/*
  *
  * Given the head of a singly linked list, reverse the list, and return the reversed list.
  *
  * */


var reverseList = function(head) {
  const reversedList = [];
  for(let i = head.length-1; i >= 0; i--){
    reversedList.push(head[i]);
  }
  return reversedList;
}

let test = reverseList([1,2,3,4,5]);
console.log(test);
