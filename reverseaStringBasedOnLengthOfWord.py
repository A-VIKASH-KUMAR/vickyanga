input1= "Thank you for accepting our interview invitation. We have scheduled an interview for you with our panelists, the details of which is shared below."

def sort_sentence(input):
    return " ".join(sorted(input.split(), key=len))


print(sort_sentence(input1))