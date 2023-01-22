-- https://codeforces.com/problemset/problem/1221/A
{-# LANGUAGE ScopedTypeVariables #-}


import qualified Data.Set as Set
import qualified Data.Map as Map
import Data.Functor


freq [] m = m
freq (a:as) m
    | Map.member a m = freq as $ Map.update (Just . (+1)) a m
    | otherwise = freq as $ Map.insert a 1 m

wouldContain n 1 m = occur m 1 >= n
wouldContain n a m
    | nc >= n = True
    | otherwise = wouldContain (2 * (n - nc)) (div a 2) m
        where nc = occur m a

occur m a
    | Map.member a m = m Map.! a
    | otherwise = 0

process :: [Int] -> Bool
process as = wouldContain 1 2048 $ freq as Map.empty


response True = putStrLn "YES"
response False = putStrLn "NO"

repeatF n f = mapM (\_ -> f) [1..n]

parse = do
    n :: Int <- getLine <&> read
    qs <- repeatF n (getLine >> map read . words <$> getLine)
    return qs

main = do
    qs <- parse
    mapM_ (response . process) qs
