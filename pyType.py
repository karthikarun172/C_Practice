guess_word = 'stevejobs'
guess_count = 0
while guess_count < 3:
    guess_count += 1
    guess = str(input('who is the founder of Apple ---->'))
    if guess == guess_word:
        print('winner')
        break
    else:
        clue_word = str(
            input({"here's a clue for you" + "---->" + 's__e__e__b_' + '------->'}))
        if clue_word == guess_word:
            print('winner')
            break
        else:
            print('you fail rise back')
