// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_preserve_unknown_enum2.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include <google/protobuf/unittest_preserve_unknown_enum2.pb.h>

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto2_preserve_unknown_enum_unittest {
class MyMessageDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<MyMessage> {
  public:
  int oneof_e_1_;
  int oneof_e_2_;
} _MyMessage_default_instance_;

namespace protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, e_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, repeated_e_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, repeated_packed_e_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, repeated_packed_unexpected_e_),
  GOOGLE_PROTOBUF_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_MyMessage_default_instance_), oneof_e_1_),
  GOOGLE_PROTOBUF_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_MyMessage_default_instance_), oneof_e_2_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MyMessage, o_),
  0,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
  ~0u,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 12, sizeof(MyMessage)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_MyMessage_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "google/protobuf/unittest_preserve_unknown_enum2.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _MyMessage_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _MyMessage_default_instance_.DefaultConstruct();
  _MyMessage_default_instance_.oneof_e_1_ = 0;
  _MyMessage_default_instance_.oneof_e_2_ = 0;
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n5google/protobuf/unittest_preserve_unkn"
      "own_enum2.proto\022%proto2_preserve_unknown"
      "_enum_unittest\"\270\003\n\tMyMessage\0228\n\001e\030\001 \001(\0162"
      "-.proto2_preserve_unknown_enum_unittest."
      "MyEnum\022A\n\nrepeated_e\030\002 \003(\0162-.proto2_pres"
      "erve_unknown_enum_unittest.MyEnum\022L\n\021rep"
      "eated_packed_e\030\003 \003(\0162-.proto2_preserve_u"
      "nknown_enum_unittest.MyEnumB\002\020\001\022S\n\034repea"
      "ted_packed_unexpected_e\030\004 \003(\0162-.proto2_p"
      "reserve_unknown_enum_unittest.MyEnum\022B\n\t"
      "oneof_e_1\030\005 \001(\0162-.proto2_preserve_unknow"
      "n_enum_unittest.MyEnumH\000\022B\n\toneof_e_2\030\006 "
      "\001(\0162-.proto2_preserve_unknown_enum_unitt"
      "est.MyEnumH\000B\003\n\001o*#\n\006MyEnum\022\007\n\003FOO\020\000\022\007\n\003"
      "BAR\020\001\022\007\n\003BAZ\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 574);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/unittest_preserve_unknown_enum2.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto

const ::google::protobuf::EnumDescriptor* MyEnum_descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::file_level_enum_descriptors[0];
}
bool MyEnum_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MyMessage::kEFieldNumber;
const int MyMessage::kRepeatedEFieldNumber;
const int MyMessage::kRepeatedPackedEFieldNumber;
const int MyMessage::kRepeatedPackedUnexpectedEFieldNumber;
const int MyMessage::kOneofE1FieldNumber;
const int MyMessage::kOneofE2FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MyMessage::MyMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:proto2_preserve_unknown_enum_unittest.MyMessage)
}
MyMessage::MyMessage(const MyMessage& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      repeated_e_(from.repeated_e_),
      repeated_packed_e_(from.repeated_packed_e_),
      repeated_packed_unexpected_e_(from.repeated_packed_unexpected_e_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  e_ = from.e_;
  clear_has_o();
  switch (from.o_case()) {
    case kOneofE1: {
      set_oneof_e_1(from.oneof_e_1());
      break;
    }
    case kOneofE2: {
      set_oneof_e_2(from.oneof_e_2());
      break;
    }
    case O_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:proto2_preserve_unknown_enum_unittest.MyMessage)
}

void MyMessage::SharedCtor() {
  _cached_size_ = 0;
  e_ = 0;
  clear_has_o();
}

MyMessage::~MyMessage() {
  // @@protoc_insertion_point(destructor:proto2_preserve_unknown_enum_unittest.MyMessage)
  SharedDtor();
}

void MyMessage::SharedDtor() {
  if (has_o()) {
    clear_o();
  }
}

void MyMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MyMessage::descriptor() {
  protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MyMessage& MyMessage::default_instance() {
  protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::InitDefaults();
  return *internal_default_instance();
}

MyMessage* MyMessage::New(::google::protobuf::Arena* arena) const {
  MyMessage* n = new MyMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MyMessage::clear_o() {
// @@protoc_insertion_point(one_of_clear_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  switch (o_case()) {
    case kOneofE1: {
      // No need to clear
      break;
    }
    case kOneofE2: {
      // No need to clear
      break;
    }
    case O_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = O_NOT_SET;
}


void MyMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  repeated_e_.Clear();
  repeated_packed_e_.Clear();
  repeated_packed_unexpected_e_.Clear();
  e_ = 0;
  clear_o();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MyMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
            set_e(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
            add_repeated_e(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(18u)) {
          DO_((::google::protobuf::internal::WireFormat::ReadPackedEnumPreserveUnknowns(
                 input,
                 2,
                 ::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid,
                 mutable_unknown_fields(),
                 this->mutable_repeated_e())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u)) {
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(length);
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
              add_repeated_packed_e(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
            } else {
              mutable_unknown_fields()->AddVarint(3, value);
            }
          }
          input->PopLimit(limit);
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(24u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
            add_repeated_packed_e(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(3, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
            add_repeated_packed_unexpected_e(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else if (static_cast< ::google::protobuf::uint8>(tag) ==
                   static_cast< ::google::protobuf::uint8>(34u)) {
          DO_((::google::protobuf::internal::WireFormat::ReadPackedEnumPreserveUnknowns(
                 input,
                 4,
                 ::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid,
                 mutable_unknown_fields(),
                 this->mutable_repeated_packed_unexpected_e())));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
            set_oneof_e_1(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value)) {
            set_oneof_e_2(static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(value));
          } else {
            mutable_unknown_fields()->AddVarint(6, value);
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:proto2_preserve_unknown_enum_unittest.MyMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:proto2_preserve_unknown_enum_unittest.MyMessage)
  return false;
#undef DO_
}

void MyMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->e(), output);
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
  for (int i = 0, n = this->repeated_e_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->repeated_e(i), output);
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
  if (this->repeated_packed_e_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(_repeated_packed_e_cached_byte_size_);
  }
  for (int i = 0, n = this->repeated_packed_e_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->repeated_packed_e(i), output);
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
  for (int i = 0, n = this->repeated_packed_unexpected_e_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->repeated_packed_unexpected_e(i), output);
  }

  switch (o_case()) {
    case kOneofE1:
      ::google::protobuf::internal::WireFormatLite::WriteEnum(
        5, this->oneof_e_1(), output);
      break;
    case kOneofE2:
      ::google::protobuf::internal::WireFormatLite::WriteEnum(
        6, this->oneof_e_2(), output);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:proto2_preserve_unknown_enum_unittest.MyMessage)
}

::google::protobuf::uint8* MyMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->e(), target);
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
  target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
    2, this->repeated_e_, target);

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
  if (this->repeated_packed_e_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(    _repeated_packed_e_cached_byte_size_, target);
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->repeated_packed_e_, target);
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
  target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
    4, this->repeated_packed_unexpected_e_, target);

  switch (o_case()) {
    case kOneofE1:
      target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
        5, this->oneof_e_1(), target);
      break;
    case kOneofE2:
      target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
        6, this->oneof_e_2(), target);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:proto2_preserve_unknown_enum_unittest.MyMessage)
  return target;
}

size_t MyMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
  {
    size_t data_size = 0;
    unsigned int count = this->repeated_e_size();for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->repeated_e(i));
    }
    total_size += (1UL * count) + data_size;
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
  {
    size_t data_size = 0;
    unsigned int count = this->repeated_packed_e_size();for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->repeated_packed_e(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _repeated_packed_e_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
  {
    size_t data_size = 0;
    unsigned int count = this->repeated_packed_unexpected_e_size();for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->repeated_packed_unexpected_e(i));
    }
    total_size += (1UL * count) + data_size;
  }

  // optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
  if (has_e()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->e());
  }

  switch (o_case()) {
    // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
    case kOneofE1: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->oneof_e_1());
      break;
    }
    // optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
    case kOneofE2: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->oneof_e_2());
      break;
    }
    case O_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MyMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  const MyMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MyMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:proto2_preserve_unknown_enum_unittest.MyMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:proto2_preserve_unknown_enum_unittest.MyMessage)
    MergeFrom(*source);
  }
}

void MyMessage::MergeFrom(const MyMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  repeated_e_.MergeFrom(from.repeated_e_);
  repeated_packed_e_.MergeFrom(from.repeated_packed_e_);
  repeated_packed_unexpected_e_.MergeFrom(from.repeated_packed_unexpected_e_);
  if (from.has_e()) {
    set_e(from.e());
  }
  switch (from.o_case()) {
    case kOneofE1: {
      set_oneof_e_1(from.oneof_e_1());
      break;
    }
    case kOneofE2: {
      set_oneof_e_2(from.oneof_e_2());
      break;
    }
    case O_NOT_SET: {
      break;
    }
  }
}

void MyMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyMessage::CopyFrom(const MyMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:proto2_preserve_unknown_enum_unittest.MyMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyMessage::IsInitialized() const {
  return true;
}

void MyMessage::Swap(MyMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MyMessage::InternalSwap(MyMessage* other) {
  repeated_e_.InternalSwap(&other->repeated_e_);
  repeated_packed_e_.InternalSwap(&other->repeated_packed_e_);
  repeated_packed_unexpected_e_.InternalSwap(&other->repeated_packed_unexpected_e_);
  std::swap(e_, other->e_);
  std::swap(o_, other->o_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MyMessage::GetMetadata() const {
  protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_google_2fprotobuf_2funittest_5fpreserve_5funknown_5fenum2_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MyMessage

// optional .proto2_preserve_unknown_enum_unittest.MyEnum e = 1;
bool MyMessage::has_e() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void MyMessage::set_has_e() {
  _has_bits_[0] |= 0x00000001u;
}
void MyMessage::clear_has_e() {
  _has_bits_[0] &= ~0x00000001u;
}
void MyMessage::clear_e() {
  e_ = 0;
  clear_has_e();
}
::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::e() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(e_);
}
void MyMessage::set_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  set_has_e();
  e_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.e)
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_e = 2;
int MyMessage::repeated_e_size() const {
  return repeated_e_.size();
}
void MyMessage::clear_repeated_e() {
  repeated_e_.Clear();
}
::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_e_.Get(index));
}
void MyMessage::set_repeated_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
}
void MyMessage::add_repeated_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
}
const ::google::protobuf::RepeatedField<int>&
MyMessage::repeated_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return repeated_e_;
}
::google::protobuf::RepeatedField<int>*
MyMessage::mutable_repeated_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_e)
  return &repeated_e_;
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_e = 3 [packed = true];
int MyMessage::repeated_packed_e_size() const {
  return repeated_packed_e_.size();
}
void MyMessage::clear_repeated_packed_e() {
  repeated_packed_e_.Clear();
}
::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_packed_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_packed_e_.Get(index));
}
void MyMessage::set_repeated_packed_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
}
void MyMessage::add_repeated_packed_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
}
const ::google::protobuf::RepeatedField<int>&
MyMessage::repeated_packed_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return repeated_packed_e_;
}
::google::protobuf::RepeatedField<int>*
MyMessage::mutable_repeated_packed_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_e)
  return &repeated_packed_e_;
}

// repeated .proto2_preserve_unknown_enum_unittest.MyEnum repeated_packed_unexpected_e = 4;
int MyMessage::repeated_packed_unexpected_e_size() const {
  return repeated_packed_unexpected_e_.size();
}
void MyMessage::clear_repeated_packed_unexpected_e() {
  repeated_packed_unexpected_e_.Clear();
}
::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::repeated_packed_unexpected_e(int index) const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(repeated_packed_unexpected_e_.Get(index));
}
void MyMessage::set_repeated_packed_unexpected_e(int index, ::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_unexpected_e_.Set(index, value);
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
}
void MyMessage::add_repeated_packed_unexpected_e(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  repeated_packed_unexpected_e_.Add(value);
  // @@protoc_insertion_point(field_add:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
}
const ::google::protobuf::RepeatedField<int>&
MyMessage::repeated_packed_unexpected_e() const {
  // @@protoc_insertion_point(field_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return repeated_packed_unexpected_e_;
}
::google::protobuf::RepeatedField<int>*
MyMessage::mutable_repeated_packed_unexpected_e() {
  // @@protoc_insertion_point(field_mutable_list:proto2_preserve_unknown_enum_unittest.MyMessage.repeated_packed_unexpected_e)
  return &repeated_packed_unexpected_e_;
}

// optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_1 = 5;
bool MyMessage::has_oneof_e_1() const {
  return o_case() == kOneofE1;
}
void MyMessage::set_has_oneof_e_1() {
  _oneof_case_[0] = kOneofE1;
}
void MyMessage::clear_oneof_e_1() {
  if (has_oneof_e_1()) {
    o_.oneof_e_1_ = 0;
    clear_has_o();
  }
}
::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::oneof_e_1() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_1)
  if (has_oneof_e_1()) {
    return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(o_.oneof_e_1_);
  }
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(0);
}
void MyMessage::set_oneof_e_1(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  if (!has_oneof_e_1()) {
    clear_o();
    set_has_oneof_e_1();
  }
  o_.oneof_e_1_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_1)
}

// optional .proto2_preserve_unknown_enum_unittest.MyEnum oneof_e_2 = 6;
bool MyMessage::has_oneof_e_2() const {
  return o_case() == kOneofE2;
}
void MyMessage::set_has_oneof_e_2() {
  _oneof_case_[0] = kOneofE2;
}
void MyMessage::clear_oneof_e_2() {
  if (has_oneof_e_2()) {
    o_.oneof_e_2_ = 0;
    clear_has_o();
  }
}
::proto2_preserve_unknown_enum_unittest::MyEnum MyMessage::oneof_e_2() const {
  // @@protoc_insertion_point(field_get:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_2)
  if (has_oneof_e_2()) {
    return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(o_.oneof_e_2_);
  }
  return static_cast< ::proto2_preserve_unknown_enum_unittest::MyEnum >(0);
}
void MyMessage::set_oneof_e_2(::proto2_preserve_unknown_enum_unittest::MyEnum value) {
  assert(::proto2_preserve_unknown_enum_unittest::MyEnum_IsValid(value));
  if (!has_oneof_e_2()) {
    clear_o();
    set_has_oneof_e_2();
  }
  o_.oneof_e_2_ = value;
  // @@protoc_insertion_point(field_set:proto2_preserve_unknown_enum_unittest.MyMessage.oneof_e_2)
}

bool MyMessage::has_o() const {
  return o_case() != O_NOT_SET;
}
void MyMessage::clear_has_o() {
  _oneof_case_[0] = O_NOT_SET;
}
MyMessage::OCase MyMessage::o_case() const {
  return MyMessage::OCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto2_preserve_unknown_enum_unittest

// @@protoc_insertion_point(global_scope)
