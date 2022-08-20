# Write your MySQL query statement below
SELECT id, movie, description, rating
FROM Cinema
WHERE Cinema.id % 2 = 1 AND  Cinema.description <> 'boring'
ORDER BY rating DESC