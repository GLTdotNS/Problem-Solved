const rti = (s) => {
  const kvp = {
    I: 1,
    V: 5,
    X: 10,
    L: 50,
    C: 100,
    D: 500,
    M: 1000,
  };
  let year = 0;
  for (let i = 0; i < s.length; i++) {
    if (kvp[s[i]] < kvp[s[i + 1]]) {
      year -= kvp[s[i]];
      console.log(kvp[s[i]]);
    } else {
      year += kvp[s[i]];
      console.log(kvp[s[i]]);
    }
  }
  return year;
};

console.log(rti("MCMXCIV"));
