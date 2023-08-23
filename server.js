const readline = require('readline').createInterface({
    input: process.stdin,
    output: process.stdout
  });

  readline.question('Your Roll.no:', Rollno => {
    console.log(`Rollno: ${Rollno}`);
    readline.close();
    let sum=0;
    for(let i=0;i<10;i++)
    {
      res=Rollno.codePointAt(i);
       if(res>=65 && res<=91)
       {
         sum+=parseInt(res);
       }
       else
       {
         sum+=parseInt(Rollno.charAt(i));
       }
    }
    console.log(`Sum: ${sum}`);
  });

