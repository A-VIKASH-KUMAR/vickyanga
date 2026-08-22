input1= "Thank you for accepting our interview invitation. We have scheduled an interview for you with our panelists, the details of which is shared below."

def sort_sentence(input):
    input_array = input.split(" ")
    print("input array", input_array)
    result =  []
    final_result = []
    for word in input_array:
        result.append({word:len(word)})
    # for dic in result:

        # result.append(len(word))
        # result.sort()
    result.sort(key=lambda item: list(item.values())[0])
    # for item in result:
    #     result = 
    all_keys = [key for d in result for key in d]
    print("keys", all_keys)
    
    return " ".join(all_keys)

print(sort_sentence(input1))