while 1:
    m = input("請輸入資料:\n")
    m = int(m)+100 if m.isdigit() else ("ok-"+m if m!= ""  else None)
    print(m)

