s ="08"
try:
	f=s.strip('').strip('0')
	if len(f)==0:
                t = ''.join(['"',s,'"', "=> true"])
                print(t)
                return True
	eval(s)
	t = ''.join(['"',s,'"', "=> true"])
	print(t)
except Exception:
	t =  ''.join(['"',s,'"', " => false"])
	print(t)
 