import sys 

stack = []
answer = ""
n = int(sys.stdin.readline())
for i in range(0, n):
    user_input = sys.stdin.readline().rstrip('\n')

    if user_input == 'size':
        answer += (str(len(stack)) + '\n')
    elif user_input == 'empty':
        if len(stack) == 0:
            answer += (str(1) + '\n')
        else:
            answer += (str(0) + '\n')
    elif user_input == 'top':
        if len(stack) == 0:
            answer += (str(-1) + '\n')
        else:
            answer += (str(stack[-1]) + '\n')
    elif user_input == 'pop':
        if len(stack) == 0:
            answer += (str(-1) + '\n')
        else:
            answer += (str(stack.pop()) + '\n')
    elif 'push' in user_input:
        push_input = int(user_input.split(' ')[1])
        stack.append(push_input)

print(answer)