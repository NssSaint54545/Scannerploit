# Today i am making my own awesome port scanning tool using Python
#so be touched 

from pyfiglet import Figlet   # we will use Figlet libary from pyfiglet to create awesome ascii Text
import socket  # we will use socket libary to scan port
from IPy import IP  # this libary will also helps to scan port

# (banner = ''') will help us to put an ascii art in our Tool/Programme. we need to open it with (''')
banner = '''  

                                       ,   ,                                
                                        $,  $,     ,                         
                                        "ss.$ss. .s'                         
                                ,     .ss$$$$$$$$$$s,                        
                                $. s$$$$$$$$$$$$$$`$$Ss                      
                                "$$$$$$$$$$$$$$$$$$o$$$       ,              
                               s$$$$$$$$$$$$$$$$$$$$$$$$s,  ,s               
                              s$$$$$$$$$"$$$$$$""""$$$$$$"$$$$$,             
                              s$$$$$$$$$$s""$$$$ssssss"$$$$$$$$"             
                             s$$$$$$$$$$'         `"""ss"$"$s""              
                             s$$$$$$$$$$,              `"""""$  .s$$s        
                             s$$$$$$$$$$$$s,...               `s$$'  `       
                         `ssss$$$$$$$$$$$$$$$$$$$$####s.     .$$"$.   , s-   
                           `""""$$$$$$$$$$$$$$$$$$$$#####$$$$$$"     $.$'    
                                 "$$$$$$$$$$$$$$$$$$$$$####s""     .$$$|     
                                   "$$$$$$$$$$$$$$$$$$$$$$$$##s    .$$" $    
                                   $$""$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"   `    
                                  $$"  "$"$$$$$$$$$$$$$$$$$$$$S""""'         
                             ,   ,"     '  $$$$$$$$$$$$$$$$####s             
                             $.          .s$$$$$$$$$$$$$$$$$####"            
                 ,           "$s.   ..ssS$$$$$$$$$$$$$$$$$$$####"            
                 $           .$$$S$$$$$$$$$$$$$$$$$$$$$$$$#####"             
                 Ss     ..sS$$$$$$$$$$$$$$$$$$$$$$$$$$$######""              
                  "$$sS$$$$$$$$$$$$$$$$$$$$$$$$$$$########"                  
           ,      s$$$$$$$$$$$$$$$$$$$$$$$$#########""'                      
           $    s$$$$$$$$$$$$$$$$$$$$$#######""'      s'         ,           
           $$..$$$$$$$$$$$$$$$$$$######"'       ....,$$....    ,$            
            "$$$$$$$$$$$$$$$######"' ,     .sS$$$$$$$$$$$$$$$$s$$            
              $$$$$$$$$$$$#####"     $, .s$$$$$$$$$$$$$$$$$$$$$$$$s.         
   )          $$$$$$$$$$$#####'      `$$$$$$$$$###########$$$$$$$$$$$.       
  ((          $$$$$$$$$$$#####       $$$$$$$$###"       "####$$$$$$$$$$      
  ) \         $$$$$$$$$$$$####.     $$$$$$###"             "###$$$$$$$$$   s'
 (   )        $$$$$$$$$$$$$####.   $$$$$###"                ####$$$$$$$$s$$' 
 )  ( (       $$"$$$$$$$$$$$#####.$$$$$###'                .###$$$$$$$$$$"   
 (  )  )   _,$"   $$$$$$$$$$$$######.$$##'                .###$$$$$$$$$$     
 ) (  ( \.         "$$$$$$$$$$$$$#######,,,.          ..####$$$$$$$$$$$"     
(   )$ )  )        ,$$$$$$$$$$$$$$$$$$####################$$$$$$$$$$$"       
(   ($$  ( \     _sS"  `"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$S$$,       
 )  )$$$s ) )  .      .   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"'  `$$      
  (   $$$Ss/  .$,    .$,,s$$$$$$##S$$$$$$$$$$$$$$$$$$$$$$$$S""        '      
    \)_$$$$$$$$$$$$$$$$$$$$$$$##"  $$        `$$.        `$$.                
        `"S$$$$$$$$$$$$$$$$$#"      $          `$          `$                
            `"""""""""""""'         '           '           '


''' # and clode it with (''') at the end of ascii art

print(banner) # print(banner) will print the ascii art when user will interact with tool/programme

custom_fig = Figlet(font='Slant') # this  will set font for text
print(custom_fig.renderText('ScannerSploit')) # this  will print ascii font with your own text inside .renderText('Your text')
print('[ -> Coded by Nss Saint.                                      ]') # this is just for information stuff.
print('| -> This Tool is used to scan ports on Target Ip.            |')
print('| -> Contact:- gadgetclass112@gmail.com.                      |')
print('| -> Youtube Channel:- Nss Saint.                             |')
print('| -> Support if you like this Tool.                           |')
print('| -> You can get this tool on github                          |')
print('[ -> Thank you for using this Tool.                           ]') # until here
print('') # this two print('') will make some space between information and scanning section.
print('')
def scanner(ip , port):  # this  will define a function 
     try:  # this  will try that ip is connecting with the port
          scanner = socket.socket()
          scanner.settimeout(0.1)  # this will set time out of connecting fo that it could not take much time
          scanner.connect((ip , port)) # this will try to connect port which targte ip from which, python can determine that the port is opened or not on that ip 
          print('[+] Port ' + str(port) + ' is opened.') # this will print the result. str is used to display port which are been trying to connect with target ip. it is important to convert it into string so that it can be displayed 
     except: # when the port can't connect with the target ip then? in this type of condition except is used
          print('-----------------') 

ip = input('[+] Enter Target Ip:- ') # by this,  user can give his target ip to the scanner 
for port in range(1,10000):  # this will scan all port 1 to 10000 on the target ip
     scanner(ip , port)  