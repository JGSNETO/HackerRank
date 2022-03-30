candles = [4, 5, 5, 6, 6]
higher, counter = 0, 0
for candle in candles:
    if candle >=higher:
        higher = candle

for candle in candles:
    if candle == higher:
        counter += 1
    
print(higher)
print(counter)