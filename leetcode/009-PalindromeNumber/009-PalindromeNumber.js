let isPalindrome = (x) => {
  x = x.toString()

  let y = ""
  for(let i = x.length - 1; i >= 0; i--){
    y = y.concat(x.charAt(i))
  }

  if (y == x){
    return true
  }
  return false
}

// Tests
//isPalindrome(121);		// Passed
//isPalindrome(5444);		// Passed
//isPalindrome(10);		// Passed
//isPalindrome(55002912);	// Passed
//isPalindrome(4884);		// Passed
