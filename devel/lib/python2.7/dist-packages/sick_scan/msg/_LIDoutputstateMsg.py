# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from sick_scan/LIDoutputstateMsg.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import std_msgs.msg

class LIDoutputstateMsg(genpy.Message):
  _md5sum = "e31d4eb61fa1d840e24cb97a0ef71ace"
  _type = "sick_scan/LIDoutputstateMsg"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """# This message contains the "sSN LIDoutputstate" message of a Sick laser scanner as an ros message.
#

Header header

# Status code
uint16 version_number # Status code version number
uint32 system_counter # Status code system counter (time in microsec since power up, max. 71 min then starting from 0 again)

# Array of output states (state and count)
uint8[] output_state  # output states, each state with value 0 (not active), 1 (active) or 2 (not used)
uint32[] output_count # output counter

# Time block (sensortime from the last change of min. one of the outputs)
uint16 time_state   # No time data: 0, Time data: 1
uint16 year        # f.e. 2021
uint8 month        # 1 ... 12
uint8 day          # 1 ... 31
uint8 hour         # 0 ... 23
uint8 minute       # 0 ... 59
uint8 second       # 0 ... 59
uint32 microsecond # 0 ... 999999

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
string frame_id
"""
  __slots__ = ['header','version_number','system_counter','output_state','output_count','time_state','year','month','day','hour','minute','second','microsecond']
  _slot_types = ['std_msgs/Header','uint16','uint32','uint8[]','uint32[]','uint16','uint16','uint8','uint8','uint8','uint8','uint8','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,version_number,system_counter,output_state,output_count,time_state,year,month,day,hour,minute,second,microsecond

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(LIDoutputstateMsg, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.version_number is None:
        self.version_number = 0
      if self.system_counter is None:
        self.system_counter = 0
      if self.output_state is None:
        self.output_state = b''
      if self.output_count is None:
        self.output_count = []
      if self.time_state is None:
        self.time_state = 0
      if self.year is None:
        self.year = 0
      if self.month is None:
        self.month = 0
      if self.day is None:
        self.day = 0
      if self.hour is None:
        self.hour = 0
      if self.minute is None:
        self.minute = 0
      if self.second is None:
        self.second = 0
      if self.microsecond is None:
        self.microsecond = 0
    else:
      self.header = std_msgs.msg.Header()
      self.version_number = 0
      self.system_counter = 0
      self.output_state = b''
      self.output_count = []
      self.time_state = 0
      self.year = 0
      self.month = 0
      self.day = 0
      self.hour = 0
      self.minute = 0
      self.second = 0
      self.microsecond = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_HI().pack(_x.version_number, _x.system_counter))
      _x = self.output_state
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.output_count)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(struct.Struct(pattern).pack(*self.output_count))
      _x = self
      buff.write(_get_struct_2H5BI().pack(_x.time_state, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.second, _x.microsecond))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.version_number, _x.system_counter,) = _get_struct_HI().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.output_state = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.output_count = s.unpack(str[start:end])
      _x = self
      start = end
      end += 13
      (_x.time_state, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.second, _x.microsecond,) = _get_struct_2H5BI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_HI().pack(_x.version_number, _x.system_counter))
      _x = self.output_state
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.Struct('<I%sB'%length).pack(length, *_x))
      else:
        buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.output_count)
      buff.write(_struct_I.pack(length))
      pattern = '<%sI'%length
      buff.write(self.output_count.tostring())
      _x = self
      buff.write(_get_struct_2H5BI().pack(_x.time_state, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.second, _x.microsecond))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 6
      (_x.version_number, _x.system_counter,) = _get_struct_HI().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.output_state = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      pattern = '<%sI'%length
      start = end
      s = struct.Struct(pattern)
      end += s.size
      self.output_count = numpy.frombuffer(str[start:end], dtype=numpy.uint32, count=length)
      _x = self
      start = end
      end += 13
      (_x.time_state, _x.year, _x.month, _x.day, _x.hour, _x.minute, _x.second, _x.microsecond,) = _get_struct_2H5BI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2H5BI = None
def _get_struct_2H5BI():
    global _struct_2H5BI
    if _struct_2H5BI is None:
        _struct_2H5BI = struct.Struct("<2H5BI")
    return _struct_2H5BI
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_HI = None
def _get_struct_HI():
    global _struct_HI
    if _struct_HI is None:
        _struct_HI = struct.Struct("<HI")
    return _struct_HI