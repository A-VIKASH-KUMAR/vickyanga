def reverseAString(sentence):
    """
    This function takes a string as input and returns the reversed version of that string.
    
    Parameters:
    string (str): The string to be reversed.
    
    Returns:
    str: The reversed string.
    """
    result =""
    currentWord = ""
    for char in sentence:
        if char == " ":
            result =currentWord + " " + result
            currentWord = ""
        else:
            currentWord += char
    return currentWord  + " " + result

print(reverseAString("Hello World! This is a test."))  # Output: "test. a is This World! Hello"