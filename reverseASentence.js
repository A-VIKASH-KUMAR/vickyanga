const reverseASentence = (sentence) => {
    // without using any built in methods
    let result = "";
    let currentWord = "" 
    for (let i = 0; i < sentence.length; i++) {
          if (sentence[i] === " ") {
                result = currentWord + " " + result;
                currentWord = "";
          } else {
                currentWord += sentence[i];
          }
     }
     return currentWord + " " + result;
}

console.log(reverseASentence("Hello World! This is a test sentence.")); // Output: "sentence. test a is This World! Hello"