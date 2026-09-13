# Write your MySQL query statement below
WITH ordered AS (
    SELECT
        person_id,
        person_name,
        weight,
        turn,
        SUM(weight) OVER (ORDER BY turn ROWS UNBOUNDED PRECEDING) AS cum_weight
    FROM Queue
),
candidates AS (
    SELECT *
    FROM ordered
    WHERE cum_weight <= 1000
)
SELECT person_name
FROM candidates
ORDER BY turn DESC
LIMIT 1;