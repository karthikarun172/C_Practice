def superReducedString():
    s = raw_input()
    ans = []
    for i in range(len(s)):
        if s.count(s[i]) % 2 != 0:
            ans.append(s[i])

    val = set(ans)
    va = list(val)
    res = "".join(va)
    if len(res) == 0:
        return "Empty String"
    else:
        return res


print(superReducedString())
