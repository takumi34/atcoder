main = do
 [n,r] <- map read . words <$> getLine
 if (n >= 10) then
   print r 
 else 
   print (r + 100 * (10 - n))
