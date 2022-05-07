message = input("Enter a string with emoticons : ")
def emoji_converter(message):
    emoji_dict = {
    ":)" : "😆",
    ":(" : "😞"
    }
    message_words = message.split()
    result_string = ""
    for word in message_words:
        result_string = result_string + emoji_dict.get(word,word) + " "
    return result_string

print(emoji_converter(message))