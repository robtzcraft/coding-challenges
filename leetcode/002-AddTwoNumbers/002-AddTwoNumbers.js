
let addTwoNumbers = (l1, l2) => {

  l1 = l1.toString()
  l2 = l2.toString()

  let l1_o = ""
  let l2_o = ""
  for(let i = l1.length - 1; i >= 0; i--){
    if(l1.charAt(i) == "," || l1.charAt(i) == " "){
      // Pass
    } else {  
      l1_o = l1_o.concat(l1.charAt(i))
    }
  }
  for(let i = l2.length - 1; i >= 0; i--){
    if(l2.charAt(i) == "," || l2.charAt(i) == " "){
      // Pass
    } else {
      l2_o = l2_o.concat(l2.charAt(i))
    }
  }

  l1_o = parseInt(l1_o)
  l2_o = parseInt(l2_o)

  let tempValue = l1_o + l2_o
  tempValue = tempValue.toString()

  let result = [];

  for(let i = 0; i < tempValue.length; i++){
    result.push(tempValue.charAt(i))
  }

  console.log(typeof(result))
  return result
}

addTwoNumbers([2,4,3], [5,6,4])
addTwoNumbers([0], [0])
addTwoNumbers([9,9,9,9,9,9,9], [9,9,9,9])

