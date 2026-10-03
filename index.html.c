<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1, viewport-fit=cover">
<title>Jipe Loans – Prototype</title>
<style>
:root{box-sizing:border-box;padding-top:env(safe-area-inset-top,0px);padding-bottom:env(safe-area-inset-bottom,0px);
--bg:#f3f7f4;--card:#fff;--ink:#14301f;--mute:#586b5f;--line:#d6e2da;--accent:#0f8a4b;--onaccent:#fff;--soft:#e2f3ea;--warn:#b4531a}
@media (prefers-color-scheme:dark){:root:not([data-theme="light"]){--bg:#0e1a13;--card:#16251c;--ink:#e6f3ea;--mute:#98ae9f;--line:#27402f;--accent:#3ccf84;--onaccent:#07210f;--soft:#1d3a2a;--warn:#f0a06a}}
:root[data-theme="dark"]{--bg:#0e1a13;--card:#16251c;--ink:#e6f3ea;--mute:#98ae9f;--line:#27402f;--accent:#3ccf84;--onaccent:#07210f;--soft:#1d3a2a;--warn:#f0a06a}
*,*::before,*::after{box-sizing:inherit}
html{scroll-padding-top:env(safe-area-inset-top,0px)}
body{margin:0;background:var(--bg);color:var(--ink);font:16px/1.5 "Segoe UI",system-ui,-apple-system,Roboto,sans-serif}
main{max-width:480px;margin:0 auto;padding:16px 16px 40px;min-height:100vh}
h1{font-size:1.5rem;margin:0 0 6px}h2{font-size:1.2rem;margin:0 0 8px}
.mute{color:var(--mute)}.small{font-size:.85rem}
.top{display:flex;justify-content:space-between;align-items:center;margin-bottom:8px}
.logo{font-weight:800;color:var(--accent);font-size:1.2rem}
button,.btn{font:inherit;font-weight:700;border:0;border-radius:12px;padding:13px 16px;background:var(--accent);color:var(--onaccent);cursor:pointer;width:100%;margin-top:12px}
button.pill{width:auto;margin:0;padding:8px 14px;font-size:.85rem;border-radius:99px}
button.ghost{background:transparent;color:var(--ink);border:1px solid var(--line)}
.hero{background:var(--soft);border-radius:20px;padding:12px;text-align:center}
.hero svg,.queue svg{width:100%;height:auto;display:block}
.menu{display:grid;gap:10px;margin:16px 0}
.menu button{display:flex;align-items:center;gap:12px;text-align:left;background:var(--card);color:var(--ink);border:1px solid var(--line);margin:0;padding:16px}
.menu .ic{width:40px;height:40px;border-radius:12px;background:var(--soft);display:grid;place-items:center;font-size:1.3rem}
.tag{text-align:center;font-weight:600;margin:6px 0 14px}
.queue{background:var(--soft);border-radius:20px;padding:12px;margin-top:8px}
.card{background:var(--card);border:1px solid var(--line);border-radius:16px;padding:16px;margin-top:12px}
label{display:block;font-weight:600;font-size:.9rem;margin:12px 0 4px}
input,select,textarea{width:100%;font:inherit;color:var(--ink);background:var(--bg);border:1px solid var(--line);border-radius:10px;padding:10px 12px}
:focus-visible{outline:3px solid var(--accent);outline-offset:2px}
.steps{display:flex;gap:6px;margin:8px 0 4px}.steps i{flex:1;height:6px;border-radius:9px;background:var(--line)}.steps i.on{background:var(--accent)}
.err{color:var(--warn);min-height:1.3em;font-size:.9rem;margin:6px 0 0}
.row{display:flex;justify-content:space-between;padding:7px 0;border-bottom:1px solid var(--line)}.row:last-child{border:0;font-weight:800}
.amt{font-size:2rem;font-weight:800;color:var(--accent);text-align:center;margin:6px 0}
input[type=range]{padding:0;accent-color:var(--accent)}
.spin{width:44px;height:44px;border:5px solid var(--line);border-top-color:var(--accent);border-radius:50%;margin:30px auto 14px;animation:s 1s linear infinite}
@keyframes s{to{transform:rotate(360deg)}}
.safe{background:var(--soft);border-radius:12px;padding:10px 12px;margin-top:12px;font-size:.88rem}
.back{background:none;border:0;color:var(--mute);width:auto;padding:4px 0;margin:0 0 8px;font-weight:600}
.view{display:none}.view.on{display:block}
</style>
</head>
<body>
<main>

<!-- SPLASH -->
<section class="view on" id="splash">
 <div class="top"><span class="logo">Jipe Loans</span><button class="pill" data-go="menu">Get quick loan</button></div>
 <div class="hero">
  <svg viewBox="0 0 360 240" role="img" aria-label="Smiling customer receiving a loan on a phone">
   <rect width="360" height="240" rx="16" fill="#cfeadb"/>
   <circle cx="180" cy="95" r="52" fill="#8a5a3c"/>
   <path d="M130 90 Q180 30 230 90 Q215 60 180 58 Q145 60 130 90Z" fill="#2a1a10"/>
   <circle cx="161" cy="92" r="5" fill="#2a1a10"/><circle cx="199" cy="92" r="5" fill="#2a1a10"/>
   <path d="M153 112 Q180 140 207 112" fill="#fff" stroke="#2a1a10" stroke-width="3" stroke-linejoin="round"/>
   <path d="M95 240 Q100 160 180 155 Q260 160 265 240Z" fill="#0f8a4b"/>
   <rect x="226" y="140" width="56" height="92" rx="9" fill="#14301f"/><rect x="231" y="148" width="46" height="70" rx="4" fill="#e8f7ee"/>
   <text x="254" y="178" text-anchor="middle" font-size="9" font-weight="700" fill="#0f8a4b">Loan</text>
   <text x="254" y="192" text-anchor="middle" font-size="9" font-weight="700" fill="#0f8a4b">approved</text>
   <path d="M243 204l6 6 12-13" stroke="#0f8a4b" stroke-width="3" fill="none"/>
   <circle cx="70" cy="60" r="16" fill="#ffd54a"/><text x="70" y="66" text-anchor="middle" font-size="16" font-weight="800" fill="#7a5a00">KSh</text>
  </svg>
  <h1>Money when you need it</h1>
  <p class="mute" style="margin:0">Quick loans with clear costs, shown before you accept.</p>
 </div>
 <button data-go="menu">Continue</button>
 <p class="small mute" style="text-align:center">Prototype for demonstration. No data is sent or stored.</p>
</section>

<!-- MENU -->
<section class="view" id="menu">
 <div class="top"><span class="logo">Jipe Loans</span><button class="pill ghost" data-go="splash">Home</button></div>
 <div class="menu">
  <button data-go="apply"><span class="ic">💰</span><span><b>Get loan</b><br><span class="small mute">Apply in four short steps</span></span></button>
  <button data-go="invest"><span class="ic">📈</span><span><b>Invest</b><br><span class="small mute">Grow your savings</span></span></button>
  <button data-go="pay"><span class="ic">💳</span><span><b>Pay loan</b><br><span class="small mute">Repay with M-Pesa</span></span></button>
 </div>
 <p class="tag">Apply from your phone. We review your ability to repay, so there's no pressure and no surprise costs.</p>
 <div class="queue">
  <svg viewBox="0 0 360 120" role="img" aria-label="Customers queueing">
   <rect width="360" height="120" rx="14" fill="#cfeadb"/>
   <g id="ppl"></g>
   <rect y="104" width="360" height="16" fill="#9fcfb5"/>
  </svg>
  <p class="small mute" style="text-align:center;margin:6px 0 0">Thousands of customers use Jipe every month (sample text).</p>
 </div>
</section>

<!-- APPLY -->
<section class="view" id="apply">
 <button class="back" id="aback">← Back</button>
 <div class="steps" id="steps"><i></i><i></i><i></i><i></i></div>
 <div class="card" id="s1">
  <h2>Step 1: Your details</h2>
  <label for="idn">National ID number</label><input id="idn" inputmode="numeric" maxlength="8" placeholder="e.g. 12345678">
  <label for="dob">Date of birth</label><input id="dob" type="date">
  <label for="ph">M-Pesa phone number</label><input id="ph" inputmode="tel" placeholder="07XX XXX XXX">
 </div>
 <div class="card" id="s2" hidden>
  <h2>Step 2: Education & income</h2>
  <label for="edu">Highest education level</label>
  <select id="edu"><option value="">Select…</option><option>Primary</option><option>Secondary</option><option>College / TVET</option><option>University</option></select>
  <label for="inc">Main source of income</label>
  <select id="inc"><option value="">Select…</option><option>Employed</option><option>Self-employed / business</option><option>Farming</option><option>Casual work</option><option>Other</option></select>
  <label for="mon">Approx. monthly income (KSh)</label><input id="mon" inputmode="numeric" placeholder="e.g. 15000">
  <p class="small mute">We ask this to make sure a loan is affordable for you.</p>
 </div>
 <div class="card" id="s3" hidden>
  <h2>Step 3: Reason for the loan</h2>
  <label for="why">What will you use it for?</label>
  <select id="why"><option value="">Select…</option><option>Business stock</option><option>School fees</option><option>Medical</option><option>Farm inputs</option><option>Rent / household</option><option>Other</option></select>
 </div>
 <div class="card" id="s4" hidden>
  <div id="proc" style="text-align:center"><div class="spin"></div><p>Reviewing your application…</p></div>
  <div id="offer" hidden>
   <h2>Choose your loan amount</h2>
   <div class="amt" id="amt"></div>
   <input type="range" id="rng" min="10000" max="100000" step="5000" value="20000" aria-label="Loan amount">
   <div class="row small mute"><span>KSh 10,000</span><span>KSh 100,000</span></div>
   <div style="margin-top:10px">
    <div class="row"><span>Interest (8%, 30 days)</span><span id="r_int"></span></div>
    <div class="row"><span>Processing fee (2%, taken from loan)</span><span id="r_fee"></span></div>
    <div class="row"><span>You receive</span><span id="r_get"></span></div>
    <div class="row"><span>You repay in 30 days</span><span id="r_tot"></span></div>
   </div>
   <div class="safe"> You pay back <b> received amount to 0140792363 </b> when paying back the loan. Fees are shown above, and no one should ask you to send money first.</div>
   <div class="safe">✅ You pay <b>ksh500 to 0140792363 </b> before the loan is sent. Fees are shown above, and no one should ask you to send money first.</div>
   <button id="accept">Accept and submit</button>
  </div>
  <div id="done" hidden>
   <h2>Application submitted</h2>
   <p>Thank you. Once approved, the loan is sent to your M-Pesa number. You will get an SMS from the lender confirming the amount and due date.</p>
   <button data-go="menu">Back to menu</button>
  </div>
 </div>
 <p class="err" id="err" role="alert"></p>
 <button id="next">Next</button>
 <p class="small mute" style="text-align:center">Prototype only. Rates shown are examples; use your licensed lender's real terms.</p>
</section>

<!-- INVEST -->
<section class="view" id="invest">
 <button class="back" data-go="menu">← Back</button>
 <div class="card" style="text-align:center"><h2>No investments available</h2><p class="mute">Check back later for investment options.</p></div>
</section>

<!-- PAY -->
<section class="view" id="pay">
 <button class="back" data-go="menu">← Back</button>
 <div class="card">
  <h2>Pay loan</h2>
  <label for="pph">Your M-Pesa phone number</label><input id="pph" inputmode="tel" placeholder="07XX XXX XXX">
  <label for="pam">Amount (KSh)</label><input id="pam" inputmode="numeric" placeholder="e.g. 5000">
  <p class="err" id="perr" role="alert"></p>
  <button id="psend">Send