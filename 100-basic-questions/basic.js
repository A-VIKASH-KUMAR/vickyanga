// Write a program to read seconds and convert them into hours, minutes and seconds.

const timeSecondsConverter = (seconds)=> {
    const timestamp = new Date(seconds)
    return [timestamp.getHours(), timestamp.getMinutes(), seconds]
}

console.log("time hours, minutes econds", timeSecondsConverter());
