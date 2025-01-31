const input = [
    {
        "date": "2025-01-21",
        "user": 10
    },
    {
        "date": "2025-01-21",
        "user": 20
    },
    {
        "date": "2025-01-22",
        "user": 30
    },
    {
        "date": "2025-01-23",
        "user": 30
    },
    {
        "date": "2025-01-23",
        "user": 20
    }
]

// given the above input return the below output
const calculateCount = (input) => {
    let result = {};

    input.forEach(({ date, user }) => {
        if (!result[date]) {
            result[date] = { date, count: 0, user: [] };
        }
        result[date].user.push(user);
        result[date].count++;
    });

    return Object.values(result);
};
const output = [
    {
        "date": "2025-01-21",
        "count": 2,
        "user": [
            10,
            20
        ]
    },
    {
        "date": "2025-01-22",
        "count": 1,
        "user": [
            30
        ]
    },
    {
        "date": "2025-01-23",
        "count": 1,
        "user": [
            20,
            30
        ]
    }
]

console.log("log", calculateCount(input));
